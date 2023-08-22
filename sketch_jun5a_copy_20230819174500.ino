const int LEDPin = 13;
const int buttonpin = 2;

void setup() {
  pinMode(LEDPin, OUTPUT);
  pinMode(buttonpin, INPUT);
}

void loop() {
  int buttonstate = digitalRead(buttonpin);
  if (buttonstate == HIGH) {
    char Name[] = "NIRMIT";  // Storing The Name in An Array
    int NameLength = strlen(Name);

    for (int i = 0; i < NameLength; i++) {  // Running the Loop Throughout the length of the array
      char x = toupper(Name[i]);            // Convert character to uppercase

      switch (x) {
        case 'A':
          Blink(".-");
          break;
        case 'B':
          Blink("....");
          break;
        case 'C':
          Blink("-.-.");
        case 'D':
          Blink("-..");
          break;
        case 'E':
          Blink(".");
          break;
        case 'F':
          Blink("..-.");
          break;
        case 'G':
          Blink("--.");
          break;
        case 'H':
          Blink("....");
          break;
        case 'I':
          Blink("..");
          break;
        case 'J':
          Blink(".---");
          break;
        case 'K':
          Blink("-.-");
          break;
        case 'L':
          Blink(".-..");
          break;
        case 'M':
          Blink("--");
          break;
        case 'N':
          Blink("-.");
          break;
        case 'O':
          Blink("---");
          break;
        case 'P':
          Blink(".--.");
          break;
        case 'Q':
          Blink("--.-");
          break;
        case 'R':
          Blink(".-.");
          break;
        case 'S':
          Blink("...");
          break;
        case 'T':
          Blink("-");
          break;
        case 'U':
          Blink("..-");
          break;
        case 'V':
          Blink("...-");
          break;
        case 'W':
          Blink(".--");
          break;
        case 'X':
          Blink("-..-");
          break;
        case 'Y':
          Blink("-.--");
          break;
        case 'Z':
          Blink("--..");
          break;
        default:
          delay(300);
          break;
      }

      delay(3000);  // Space between the letters
    }
  }

  delay(1000);  // Space between the message repetitions
}

void Blink(const char* Morsecode) {
  for (int i = 0; Morsecode[i]; i++) {  // For Loop For Running Through the Morsecode
    if (Morsecode[i] == '.') {          // For Running The DOT Method
      digitalWrite(LEDPin, HIGH);       // Setting the pin as High
      delay(500);
      digitalWrite(LEDPin, LOW);  // Setting the pin as Low
      delay(500);
    } else if (Morsecode[i] == '-') {  // For Running The DASH Method
      digitalWrite(LEDPin, HIGH);      // Setting the pin as High
      delay(1000);
      digitalWrite(LEDPin, LOW);  // Setting the pin as Low
      delay(600);
    }
  }
}
