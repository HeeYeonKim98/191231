
/*

 Copyright (c) 2013 RedBearLab

 Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

 */

// BlueGiga Service
#define BLUEGIGA_SERVICE_UUID                         "1D5688DE-866D-3AA4-EC46-A1BDDB37ECF6"
#define BLUEGIGA_CHAR_TX_UUID                         "AF20fBAC-2518-4998-9AF7-AF42540731B3"
#define BLUEGIGA_CHAR_RX_UUID                         "AF20fBAC-2518-4998-9AF7-AF42540731B3"

// RBL Service
#define RBL_SERVICE_UUID                         "713D0000-503E-4C75-BA94-3148F18D941E"
#define RBL_CHAR_TX_UUID                         "713D0002-503E-4C75-BA94-3148F18D941E"
#define RBL_CHAR_RX_UUID                         "713D0003-503E-4C75-BA94-3148F18D941E"

// Adafruit BLE
// http://learn.adafruit.com/getting-started-with-the-nrf8001-bluefruit-le-breakout/adding-app-support
// Adafruit | Nordic's TX and RX are the opposite of RBL. This code uses RBL perspective for naming.
#define ADAFRUIT_SERVICE_UUID                         "6E400001-B5A3-F393-E0A9-E50E24DCCA9E"
#define ADAFRUIT_CHAR_TX_UUID                         "6E400003-B5A3-F393-E0A9-E50E24DCCA9E"
#define ADAFRUIT_CHAR_RX_UUID                         "6E400002-B5A3-F393-E0A9-E50E24DCCA9E"

// Laird Virtual Serial Port (vSP) service for BL600 http://www.lairdtech.com/DownloadAsset.aspx?id=2147489885
#define LAIRD_SERVICE_UUID                       "569a1101-b87f-490c-92cb-11ba5ea5167c"
#define LAIRD_CHAR_TX_UUID                       "569a2000-b87f-490c-92cb-11ba5ea5167c"
#define LAIRD_CHAR_RX_UUID                       "569a2001-b87f-490c-92cb-11ba5ea5167c"

#define RONGTA_SERVICE_UUID                      "E7810A71-73AE-499D-8C15-FAA9AEF0C3F2"
#define RONGTA_CHAR_TX_UUID                      "BEF8D6C9-9C21-4C9E-B632-BD58C1009F9F"
#define RONGTA_CHAR_RX_UUID                      "BEF8D6C9-9C21-4C9E-B632-BD58C1009F9F"

#define POSNET_SERVICE_UUID                      "53544D54-4552-494F-5345-525631303030"
#define POSNET_CHAR_TX_UUID                      "53544F55-4152-5449-4E20-205630303031"
#define POSNET_CHAR_RX_UUID                      "53544F55-4152-5449-4E20-205630303031"

#define RBL_BLE_FRAMEWORK_VER                    0x0200
