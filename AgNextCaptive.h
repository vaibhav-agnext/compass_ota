#include <pgmspace.h>

const char HTTPHEAD[] PROGMEM ="<!DOCTYPE HTML><html><head><meta content= \"text/html; charset=ISO-8859-1 \"http-equiv=\"content-type\"><meta name = \"viewport\" content = \"width = device-width, initial-scale = 1.0, maximum-scale = 1.0, user-scalable=0\"><title>AGNEXT55</title><style>"; 

const char HTTPBODYSTYLE[] PROGMEM = "body { background-color: #26472a ; font-family: Arial, Helvetica, Sans-Serif; Color: #FFFFFF; }input[type=text], select {width: 100%;padding: 12px 20px;margin: 8px 0;display: inline-block;border: 1px solid #ccc;border-radius: 4px;box-sizing: border-box;}</style></head>";

const char HTTPBODY[] PROGMEM = "<body><center>";

const char HTTPCONTENTSTYLE[] PROGMEM = "<h3 style=\"color:#cdab1e; font-family:Times New Roman,Times,Serif;padding-top: 10px;padding-bottom: 5px;font-size: 70px;font-style: oblique\">AGNEXT</h3><label style=\"color:#FFFFFF;font-family: Verdana;font-size: 27px;padding-top: 5px;padding-bottom: 10px;\">Configure Device Settings</label><br><br>";

const char HTTPDEVICE[] PROGMEM = "<label style=\"color:#FFFFF;font-family: Verdana;font-size: 27px;padding-top: 5px;padding-bottom: 10px;\">{s}</label><br><br>";
const char HTTPFORM[] PROGMEM = "<FORM action=\"/\" method=\"post\">";

const char HTTPLABLE1[] PROGMEM = "<P><label style=\"font-family:Times New Roman\">SSID</label><br><input maxlength=\"30px\" type='text' name=\"ssid\" placeholder='SSID' style=\"width: 400px; padding: 5px 10px ; margin: 8px 0; border : 2px solid #cdab1e; border-radius: 4px; box-sizing:border-box\" required;><br></P>";

const char HTTPLABLE2[] PROGMEM = "<P><label style=\"font-family:Times New Roman\">Passkey</label><br><input maxlength=\"30px\" type = \"text\" name=\"passkey\"  placeholder = \"Passkey\" style=\"width: 400px; padding: 5px 10px ; margin: 8px 0; border : 2px solid #cdab1e; border-radius: 4px; box-sizing:border-box\" required;><br></P>";

const char HTTPLABLE3[] PROGMEM = "<P ><label style=\"font-family:Times New Roman\">Device ID</label><br><input maxlength=\"30px\" type = \"text\" name=\"device\"  placeholder= \"Device ID\" style=\"width: 400px; padding: 5px 10px ; margin: 8px 0; border : 2px solid #cdab1e; border-radius: 4px; box-sizing:border-box\" required;><br></P>"; 

const char HHTTPDELAY[] PROGMEM = "<label style=\"font-family:Times New Roman\">Set Delay</label><br><select name=\"sensor_list\" id=\"sensor_id\" style=\"border=2px; width: 400px;  padding: 5px 10px; display: inline-block;  border : 2px solid #cdab1e; border-radius: 4px; box-sizing:border-box\"><option value=\"120e6\" id=\"domint\">2 minute</option><option value=\"300e6\" id=\"panjmint\">5 minute</option><option value=\"1200e6\" id=\"teemint\">30 minute</option></select><br>";

const char HTTPSUBMIT[] PROGMEM = "<INPUT type=\"submit\"> <style>input[type=\"submit\"]{background-color: #cdab1e; border: none;color: white;padding:15px 48px;text-align: center;text-decoration: none;display: inline-block;font-size: 16px;}</style>";

const char HTTPCLOSE[] PROGMEM = "</FORM></center></body>";
