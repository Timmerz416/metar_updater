#ifndef HTTPDOWNLOADER_H
#define HTTPDOWNLOADER_H

#include <string>
#include <curl/curl.h>

class CurlError { };

class HTTPDownloader {
private:
    CURL *curl_handle;

public:
    HTTPDownloader();
    ~HTTPDownloader();

    std::string download(const std::string url);
};

#endif // HTTPDOWNLOADER_H
