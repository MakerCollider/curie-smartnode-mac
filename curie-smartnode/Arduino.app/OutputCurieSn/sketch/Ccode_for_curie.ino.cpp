#include <Arduino.h>
#line 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Ccode_for_curie/Ccode_for_curie.ino"
#line 1 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Ccode_for_curie/Ccode_for_curie.ino"
#include <QueueList.h>
#include "Node.h"
#include "EventStore.h"
#include "Timer.h"
#include "DFLed.h"
#include "DFButton.h"
#include "Debug.h"

DFLed	DFLed_88864793_7779b8;
DFButton	DFButton_c92ed288_36d13;
Debug	debug_4b899599_b4766c;
QueueList<Node*> nodes;

#line 14 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Ccode_for_curie/Ccode_for_curie.ino"
void setup();
#line 32 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Ccode_for_curie/Ccode_for_curie.ino"
void loop();
#line 14 "/Users/guozhong/nodejs/curie-smartnode/Arduino.app/Ccode_for_curie/Ccode_for_curie.ino"
void setup() {
	Serial.begin(115200);
	delay(2000);
	timer.setUp();

	DFLed_88864793_7779b8.setUp("DFLed",2,nodes,false);
	nodes.clear();

	nodes<<&DFLed_88864793_7779b8<<&debug_4b899599_b4766c;
	DFButton_c92ed288_36d13.setUp("DFButton",5,0,nodes,true);
	nodes.clear();

	debug_4b899599_b4766c.setUp("debug",nodes);


	Serial.println("setUp success! start loop");
}

void loop() {
	eventStore.exec();
}
