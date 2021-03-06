/*
 * WebSocket.h
 *
 * Created: 3/30/2014 11:54:30 PM Ozmo
 */

#ifndef WEBSOCKET_H_
#define WEBSOCKET_H_

#include <IPAddress.h>

class WebSocket
{
	public:
		// Create a Websocket server
		void static WebSocket_EtherInit();
		
		void static EtherPoll();
		bool static WebSocket_send(char* data, byte length);

                static char htmlline[];   //Temp buffer for SHA, Base64 etc.
                static char key[];
                static int base64_encode(char *output, char *input, int inputLen);
                
	private:
		void static WebSocket_doHandshake();
		//Send something to connected browser
		byte static ReadNext();
		bool static WebSocket_getFrame();
		void static SendHTMLSite();
                static inline void a3_to_a4(unsigned char * a4, unsigned char * a3);
};

#endif /* WEBSOCKET_H_ */
