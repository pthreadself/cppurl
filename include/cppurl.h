//
// Created by pthreadself on 2017/7/27.
//

#ifndef CPPURL_CPPURL_H
#define CPPURL_CPPURL_H

#include <curl/curl.h>
#include <memory>
#include <iostream>

namespace cppurl {

    struct CURLDeleter {
        void operator()(CURL* p) const {
            curl_easy_cleanup(p);
        };
    };


    class Request {
    public:
        Request();
        ~Request();

    private:
        std::unique_ptr<CURL, CURLDeleter> curl_;

    };
}



#endif //CPPURL_CPPURL_H
