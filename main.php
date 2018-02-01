<?php /*
        Author: SpringHack - springhack@live.cn
        Last modified: 2018-02-02 00:57:59
        Filename: main.php
        Description: Created by SpringHack using vim automatically.
 */ ?>
<?php

$SESSION = '113CEB7AA3372938ED0E6DE2AD4848E1';

$now = dirname(__FILE__);

function common_header($url, $param) {
  $header = "curl '" . $url . "' -H 'Cookie: JSESSIONID=$SESSION' -H 'Origin: http://cg.sau.edu.cn' -H 'Accept-Encoding: gzip, deflate' -H 'Accept-Language: zh-CN,zh;q=0.9,en;q=0.8,zh-TW;q=0.7,ms;q=0.6' -H 'Upgrade-Insecure-Requests: 1' -H 'User-Agent: Mozilla/5.0 (Macintosh; Intel Mac OS X 10_13_3) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/63.0.3239.84 Safari/537.36' -H 'Content-Type: application/x-www-form-urlencoded' -H 'Accept: text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8' -H 'Cache-Control: max-age=0' -H 'Referer: http://cg.sau.edu.cn/admin/acmAdmin/problemset/problemset_stat.jsp' -H 'Connection: keep-alive' " . $param;
  return `$header`;
}


for ($i=1;$i<=2884;++$i) {
  $body = common_header('http://cg.sau.edu.cn/admin/acmAdmin/problemset/showResult_stat.jsp', "--data 'problemID=" . $i . "&userID=4110&username=RE'");
  preg_match('/href="(.*)"\ /', $body, $matches);
  if ($matches[1]) {
    $index = strstr($matches[1], 'downloadFile?filename=') && strstr($body, 'Accepted');
    echo $index;
    if ($index) {
      echo `mkdir -p ./src/$i`;
      chdir("./src/$i");
      common_header('http://cg.sau.edu.cn' . $matches[1], '-JLO');
      chdir($now);
    }
  }
}
