/*
 * appMain.cpp
 *
 *  Created on: 26.01.2018
 *      Author: dave
 */

#include "appMain.h"
#include "USBserial.h"

void	appMain()
{


}

void sendRun()
{
	USBserial::sendLine("Run...\n");
}
