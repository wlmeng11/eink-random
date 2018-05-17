#define XCL     // source clock
#define XLE  	// source latch enable
#define XOE 	// source output enable
#define XSHR  	// source shift direction
#define XSTL2   // source start pulse
#define D0 
#define D1 
#define D2 
#define D3 
#define D4 
#define D5 
#define D6 
#define D7 
#define MODE2 
#define MODE1 
#define XRL 	// gate shift direction
#define SPV 	// gate start pulse
#define CKV 	// gate clock

bool clockState = 0;

void setup() {
	/*
	pinMode(XCL, OUTPUT);
	pinMode(XLE, OUTPUT);
	pinMode(XOE, OUTPUT);
	pinMode(XSHR, OUTPUT);
	pinMode(XSTL2, OUTPUT);
	pinMode(D0, OUTPUT);
	pinMode(D1, OUTPUT);
	pinMode(D2, OUTPUT);
	pinMode(D3, OUTPUT);
	pinMode(D4, OUTPUT);
	pinMode(D5, OUTPUT);
	pinMode(D6, OUTPUT);
	pinMode(D7, OUTPUT);
	pinMode(MODE2, OUTPUT);
	pinMode(MODE1, OUTPUT);
	pinMode(XRL, OUTPUT);
	pinMode(SPV, OUTPUT);
	pinMode(CKV, OUTPUT);

	digitalWrite(MODE1, LOW);
	digitalWrite(MODE2, LOW);
	*/
	for (int i = 0; i < 18; i++)
		pinMode(i, OUTPUT);

	randomSeed(0);
}

void loop() {
	/*
	// toggle clock
	clockState = !clockState;
	digitalWrite(XCL, clockState);

	// select row (gate driver)
	digitalWrite(MODE1, HIGH);
	digitalWrite(CKV, HIGH); delayMicroseconds(1);
	digitalWrite(CKV, LOW); delayMicroseconds(4);
	digitalWrite(SPV, LOW);
	*/

	for (int i = 0; i < 18; i++) {
		if (random(2))
			digitalWrite(i, HIGH);
		digitalWrite(i, LOW);
	}

	delayMicroseconds(2);
}
