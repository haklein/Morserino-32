#ifndef MORSEJSON_H_
#define MORSEJSON_H_

/******************************************************************************************************************************
 *  Software for the Morserino-32 (M32) multi-functional Morse code machine, based on the Heltec WiFi LORA (ESP32) module   ***
 *  Copyright (C) 2018-2025  Willi Kraml, OE1WKL                                                                            ***
 *
 *  This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License
 *  as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty
 *  of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along with this program.
 *  If not, see <https://www.gnu.org/licenses/>.
 *****************************************************************************************************************************/

#include "MorsePreferences.h"

namespace MorseJSON
{
	void jsonDevice(String brd, String vsn);
	void jsonError(String errormessage);
	void jsonOK(void);
	void jsonMenu(String path, unsigned int number, boolean active, boolean exec);
	void jsonMenuList(void);
	void jsonParameter(String token);
	void jsonParameterList(void);
	void jsonGetKoch(void);
	void jsonConfigLong(MorsePreferences::parameter p);
	void jsonConfigShort(String item, int value, String displayed);
	void jsonCreate(String objName, String path, String state);
	void jsonActivate(actMessage active);
	void jsonControl(String item, uint8_t value, uint8_t mini, uint8_t maxi, boolean detailed);
	void jsonControls(void);
	void jsonSnapshots(void);
	void jsonFileStats(void);
	void jsonFileFirstLine(void);
	void jsonFileText(void);
	void jsonGetWifi(void);
	void jsonGetCwStores(void);
	void jsonGetCwStore(String value);
};

#endif /* #ifndef MORSEJSON_H_ */