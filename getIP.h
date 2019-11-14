
String getURL = "api.ipify.org" ;
void getIP(){
    
  if (!client.connect(getURL, 80)) {
    Serial.println("Failed to connect with 'api.ipify.org' !");
  }
  else {
    int timeout = millis() + 5000;
    client.print("GET /?format=json HTTP/1.1\r\nHost: api.ipify.org\r\n\r\n");
    while (client.available() == 0) {
      if (timeout - millis() < 0) {
        Serial.println(">>> Client Timeout !");
        client.stop();
        return;
      }
    }
    int size;
    while ((size = client.available()) > 0) {
      String line;
      //uint8_t* msg = (uint8_t*)malloc(size);
      line = client.readStringUntil('\n\r');
      //Serial.println(line);
      //Serial.println(sizeof(line));
      String ip = line.substring(8,21);
      Serial.println(ip);
      //snprintf(buffer,200,"%d\n",msg);
      //Serial.write(msg, size);
      //const char* ip = root["ip"];
      //Serial.println(ip);      
      //free(msg);
      
    } 
  }
  }
