//
// Created by pthreadself on 2017/7/27.
//

#include "cppurl.h"
#include <curl/curl.h>

int main() {

    cppurl::Request req;
    req.SetURL("http://www.baidu.com");

    return 0;

}

