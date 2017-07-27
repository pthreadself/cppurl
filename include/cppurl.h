//
// Created by pthreadself on 2017/7/27.
//

#ifndef CPPURL_CPPURL_H
#define CPPURL_CPPURL_H

#include <curl/curl.h>
#include <memory>
#include <iostream>

namespace cppurl {

    class Request;
    class Exception;

    struct CURLDeleter {
        void operator()(CURL* p) const {
            curl_easy_cleanup(p);
        };
    };




    /*
    class Response {
    public:
        Response(const );
    private:
        std::string raw_;

    };
     */

    class Request {
    public:
        Request();
        ~Request();


        void SetURL(const std::string & url);
        void SetURL(const char * url);

    private:
        std::unique_ptr<CURL, CURLDeleter> curl_;
    };


    class Exception: public std::exception {
    public:
        Exception(CURLcode err_code);
        const char * what() const noexcept override;
    private:
        std::string err_msg_;
    };
}



#endif //CPPURL_CPPURL_H
