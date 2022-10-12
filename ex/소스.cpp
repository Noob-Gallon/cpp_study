

void LED_SHIFT(int _cnt, int _interval) {

	DDRC = 0xFF;
	PORTC = 0xFE;
	_delay_ms(_interval);

	for (int i = 0; i < _cnt; i++) {

		for (int j = 1; j < 8; j++) {
			PORTC = ~(0x01 << j);
			_delay_ms(_interval);
		}

		for (int j = 1; j < 8; j++) {
			PORTC = ~(0x80 >> j);
			_delay_ms(_interval);
		}
	}

}