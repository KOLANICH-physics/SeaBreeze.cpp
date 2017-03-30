/***************************************************/ /**
 * @file    OBPSetWifiConfigurationSSIDExchange.cpp
 * @date    March 2017
 * @author  Ocean Optics, Inc.
 *
 * LICENSE:
 *
 * SeaBreeze Copyright (C) 2017, Ocean Optics Inc
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject
 * to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *******************************************************/

#include "common/globals.h"
#include "vendors/OceanOptics/protocols/obp/constants/OBPMessageTypes.h"
#include "vendors/OceanOptics/protocols/obp/exchanges/OBPSetWifiConfigurationSSIDExchange.h"
#include "vendors/OceanOptics/protocols/obp/hints/OBPControlHint.h"

using namespace seabreeze;
using namespace seabreeze::oceanBinaryProtocol;
using namespace std;

OBPSetWifiConfigurationSSIDExchange::OBPSetWifiConfigurationSSIDExchange() {

	this->hints->push_back(new OBPControlHint());

	this->messageType = OBPMessageTypes::OBP_SET_WIFI_SSID;

	this->payload.resize(1 + 32);// interface Index and 32 bytes for the SSID
}

OBPSetWifiConfigurationSSIDExchange::~OBPSetWifiConfigurationSSIDExchange() {
}

void OBPSetWifiConfigurationSSIDExchange::setInterfaceIndex(unsigned char interfaceIndex) {
	this->payload[0] = interfaceIndex;
}

void OBPSetWifiConfigurationSSIDExchange::setSSID(vector<unsigned char> ssid) {

	for(int i = 0; i < 32; i++) {
		this->payload[1 + i] = ssid[i];
	}
}
