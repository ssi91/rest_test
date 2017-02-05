//
// Created by ssi on 05.02.17.
//

#ifndef REST_TEST_REQUEST_H
#define REST_TEST_REQUEST_H

#import <iostream>
#import "response.h"

class Request
{
private:
	std::string headersString;
	std::string requestBodyString;
	std::string cookieString;
	std::string protocolString;

	std::string rawRequestString;

public:
	Request(std::string _protocolString, std::string _headerString, std::string _requestBodyString, std::string _cookieString) :
			protocolString(_protocolString),
			headersString(_headerString),
			requestBodyString(_requestBodyString),
			cookieString(_cookieString)
	{}

	Request(std::string _rawRequestString);

	std::string getHeadersString();
	std::string getRequestBodyString();
	std::string getCookieString();
	std::string getProtocolString();
	std::string getRawRequestString();

	Response post();
	Response get();
	Response request();
};

#endif //REST_TEST_REQUEST_H
