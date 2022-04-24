const pin_t RED_LED = D2;
const pin_t GREEN_LED = D3;
const pin_t BLUE_LED = D4;

bool toggleLight(String light);

void setup() {
	pinMode(RED_LED, OUTPUT);
	pinMode(GREEN_LED, OUTPUT);
	pinMode(BLUE_LED, OUTPUT);

    Particle.function("toggleLight", toggleLight);
}

bool toggleLight(String light)
{
    if(light == "red")
    {
        if (digitalRead(RED_LED) == LOW) {
            digitalWrite(RED_LED, HIGH);
        } else {
            digitalWrite(RED_LED, LOW);
        }
        
        return true;
    }

    if(light == "green")
    {
        if (digitalRead(GREEN_LED) == LOW) {
            digitalWrite(GREEN_LED, HIGH);
        } else {
            digitalWrite(GREEN_LED, LOW);
        }
        return true;
    }

    if(light == "blue")
    {
        if (digitalRead(BLUE_LED) == LOW) {
            digitalWrite(BLUE_LED, HIGH);
        } else {
            digitalWrite(BLUE_LED, LOW);
        } 
        return true;
    }
    
    return false;
}