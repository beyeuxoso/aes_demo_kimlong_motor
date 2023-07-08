#include "RFID.h"

MFRC522 mfrc522(SPI2_CS, RST);

void RC522_Init()
{
	SPI.setMISO(SPI2_MISO);
	SPI.setMOSI(SPI2_MOSI);
	SPI.setSCLK(SPI2_SCK);
	mfrc522.PCD_Init();
}

String getUID() {
    if (!mfrc522.PICC_IsNewCardPresent())
        return "";

    // Select one of the cards
    if (!mfrc522.PICC_ReadCardSerial())
        return "";
    
    String content = "";
    //byteletter;
    for (byte i = 0; i < mfrc522.uid.size; i++)
    { 
        content.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
        content.concat(String(mfrc522.uid.uidByte[i], HEX));
    }
    return content;
}
