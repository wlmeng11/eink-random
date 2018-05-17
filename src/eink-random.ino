// eink-random.ino

void setup() {
	for (int i = 0; i < 18; i++)
		pinMode(i, OUTPUT);

	randomSeed(0);
}

void loop() {
	for (int i = 0; i < 18; i++) {
		if (random(2))
			digitalWrite(i, HIGH);
		digitalWrite(i, LOW);
	}

	delayMicroseconds(2);
}
