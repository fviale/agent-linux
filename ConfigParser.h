/*
 * ConfigParser.h
 *
 *  Created on: Apr 27, 2009
 *      Author: vasile
 */

#ifndef CONFIGPARSER_H_
#define CONFIGPARSER_H_
#include <string>
#include <vector>
#include <xercesc/sax2/SAX2XMLReader.hpp>
#include <xercesc/sax2/DefaultHandler.hpp>
#include "ConfigHandler.h"
#include "Event.h"

using namespace xercesc;
using namespace std;

class ConfigParser {
public:
	ConfigParser(std::string config_path);
	virtual ~ConfigParser();
	Configuration *GetConfiguration();
private:
	std::string xmlFile;
	SAX2XMLReader* parser;
	ConfigHandler* defaultHandler;
	std::vector<Event> events;
	LoggerPtr logger;
};

#endif /* CONFIGPARSER_H_ */
