<?php /*
        Author: SpringHack - springhack@live.cn
        Last modified: 2018-02-02 00:59:14
        Filename: post.php
        Description: Created by SpringHack using vim automatically.
 */ ?>
<?php

$SESSION = '113CEB7AA3372938ED0E6DE2AD4848E1';

function common_post($id, $file) {
  $ret = `curl 'http://cg.sau.edu.cn/acm/showResult.jsp?problemID=$id&doSubmit=true&progLanguage=c%2B%2B&wtime=42' -H 'Cookie: JSESSIONID=$SESSION' -H 'Origin: http://cg.sau.edu.cn' -H 'Accept-Encoding: gzip, deflate' -H 'Accept-Language: zh-CN,zh;q=0.9,en;q=0.8,zh-TW;q=0.7,ms;q=0.6' -H 'Upgrade-Insecure-Requests: 1' -H 'User-Agent: Mozilla/5.0 (Macintosh; Intel Mac OS X 10_13_3) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/63.0.3239.84 Safari/537.36' -H 'Accept: text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8' -H 'Cache-Control: max-age=0' -H 'Referer: http://cg.sau.edu.cn/acm/submit.jsp?problemID=$id&pageNo=1&pages=0' -H 'Connection: keep-alive' -F 'FILE1=@$file' -compressed`;
  return $ret;
}

$list = explode(PHP_EOL, `ls ./src/*/*`);
print_r($list);

for ($i=0;$i<count($list); ++$i) {
  preg_match('/\/(\\d+)\//', $list[$i], $m);
  if ($m[1]) {
    echo $list[$i];
    common_post($m[1], $list[$i]);
  }
}
