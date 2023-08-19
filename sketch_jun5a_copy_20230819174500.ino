const int ledPin = 13; // Led Pin Number

void setup() {
  pinMode(ledPin, OUTPUT);    // Setting the pin as OUTPUT pin
}

void loop() {
  char msg[] = "NIRMIT"; // Storing The Name in An Array
  int mesgLength = strlen(msg);

  for (int i = 0; i < mesgLength; i++) {     // Running the Loop Throughout the length of the array
    char x = toupper(msg[i]);           // Convert character to uppercase

    switch (x) {
      case 'A':
        blinking_func(".-");
        break;
      case 'B':
        blinking_func("....");
        break;
      case 'C':
        blinking_func("-.-.");
      case 'D':
        blinking_func("-..");
        break;
      case 'E':
        blinking_func(".");
        break;
      case 'F':
        blinking_func("..-.");
        break;
      case 'G':
        blinking_func("--.");
        break;
      case 'H':
        blinking_func("....");
        break;
      case 'I':
        blinking_func("..");
        break;
      case 'J':
        blinking_func(".---");
        break;
      case 'K':
        blinking_func("-.-");
        break;
      case 'L':
        blinking_func(".-..");
        break;
      case 'M':
        blinking_func("--");
        break;
      case 'N':
        blinking_func("-.");
        break;
      case 'O':
        blinking_func("---");
        break;
      case 'P':
        blinking_func(".--.");
        break;
      case 'Q':
        blinking_func("--.-");
        break;
      case 'R':
        blinking_func(".-.");
        break;
      case 'S':
        blinking_func("...");
        break;
      case 'T':
        blinking_func("-");
        break;
      case 'U':
        blinking_func("..-");
        break;
      case 'V':
        blinking_func("...-");
        break;
      case 'W':
        blinking_func(".--");
        break;
      case 'X':
        blinking_func("-..-");
        break;
      case 'Y':
        blinking_func("-.--");
        break;
      case 'Z':
        blinking_func("--..");
        break;
      default:
        delay(300);
        break;
    }
    
    delay(3000); // Space between letters
  }

  delay(1000); // Space between message repetitions
}

// Implementing The Function For Blinking
void blinking_func(const char* Morsecode) {
  for (int i = 0; Morsecode[i]; i++) {    // For Loop For Running Through the Morsecode
    if (Morsecode[i] == '.') {            // For Running The DOT Method
      digitalWrite(ledPin, HIGH);       // Setting the pin as High
      delay(500);
      digitalWrite(ledPin, LOW);        // Setting the pin as Low
      delay(400);
    } 
    else if (Morsecode[i] == '-') {       // For Running The DASH Method
      digitalWrite(ledPin, HIGH);         // Setting the pin as High
      delay(1800);
      digitalWrite(ledPin, LOW);        // Setting the pin as Low
      delay(400);
    }
  }
}