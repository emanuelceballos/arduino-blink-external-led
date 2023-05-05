const int BUTTON = 2;
const int LED = 3;
int STATUS = LOW;

void setup()
{
    pinMode(BUTTON, INPUT);
    pinMode(LED, OUTPUT);
    digitalWrite(LED, LOW);
}

void loop()
{
    while (digitalRead(BUTTON) == LOW);

    STATUS = digitalRead(LED);
    digitalWrite(LED, !STATUS);

    // with this line we handle the bouncing effect
    while (digitalRead(BUTTON) == HIGH);
}
