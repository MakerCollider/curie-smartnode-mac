#include <QueueList.h>#include "Node.h"#include "EventStore.h"#include "Timer.h"#include "MotorDriver.h"#include "Inject.h"#include "DFServo.h"#include "DFRotation.h"MotorDriver	MotorDriver_58ded654_0c11b8;Inject	inject_f3ec4067_ac9ac;Inject	inject_4d87ca67_d17114;Inject	inject_fbd2134b_45829;Inject	inject_e14d59b8_2ef718;Inject	inject_c8f7f0be_044aa;MotorDriver	MotorDriver_338e4846_ef78d8;DFServo	DFServo_7dbdd403_f4c4ac;DFRotation	DFRotation_b5805417_eaa018;DFServo	DFServo_9ad39969_ecbbb8;DFRotation	DFRotation_7b5e1f1a_bed2f;QueueList<Node*> nodes;void setup() {	Serial.begin(115200);	delay(2000);	timer.setUp();	MotorDriver_58ded654_0c11b8.setUp("MotorDriver",3,4,5,6,8,7,40,nodes,false);	nodes.clear();	nodes<<&MotorDriver_58ded654_0c11b8<<&DFRotation_b5805417_eaa018<<&DFRotation_7b5e1f1a_bed2f;	inject_f3ec4067_ac9ac.setUp("Forward",nodes,false);	nodes.clear();	nodes<<&MotorDriver_58ded654_0c11b8;	inject_4d87ca67_d17114.setUp("Leftward",nodes,false);	nodes.clear();	nodes<<&MotorDriver_58ded654_0c11b8;	inject_fbd2134b_45829.setUp("Backward",nodes,false);	nodes.clear();	nodes<<&MotorDriver_58ded654_0c11b8;	inject_e14d59b8_2ef718.setUp("Rightward",nodes,false);	nodes.clear();	nodes<<&MotorDriver_58ded654_0c11b8;	inject_c8f7f0be_044aa.setUp("Stop",nodes,false);	nodes.clear();	MotorDriver_338e4846_ef78d8.setUp("MotorDriver",3,0,1,5,2,4,200,nodes,false);	nodes.clear();	DFServo_7dbdd403_f4c4ac.setUp("DFServo",11,nodes,false);	nodes.clear();	nodes<<&DFServo_7dbdd403_f4c4ac;	DFRotation_b5805417_eaa018.setUp("DFRotation",A0,200,nodes,false);	nodes.clear();	DFServo_9ad39969_ecbbb8.setUp("DFServo",10,nodes,false);	nodes.clear();	nodes<<&DFServo_9ad39969_ecbbb8;	DFRotation_7b5e1f1a_bed2f.setUp("DFRotation",A1,200,nodes,false);	Serial.println("setUp success! start loop");}void loop() {	eventStore.exec();}String injectString = "";String injectDigital = "";unsigned char msgCount=0;void serialEvent() {	int16_t msg[30]={0};	while (Serial.available()) {		char inChar = (char)Serial.read();		if(isDigit(inChar)){			injectDigital += inChar;		}		else{			injectString += inChar;			msg[msgCount] = injectDigital.toInt();			injectDigital = "";			msgCount++;		}	}	msg[msgCount] = injectDigital.toInt();	QueueList<Node*> node;	node<<&inject_f3ec4067_ac9ac;	uint8_t msgLen = msgCount+1;	eventStore.addEvent(node,input,"Serial",msg,msgLen);	msg[0] = 0;	msgCount = 0;	injectDigital = "";	injectString = "";}