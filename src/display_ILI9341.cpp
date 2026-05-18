#include <Adafruit_ILI9341.h>

#define TFT_DC 2 // Data/Command (define se os dados são comandos ou texto/imagem).
#define TFT_CS 15 // Chip Select (seleciona o display para comunicação).
// #define TFT_CS -1 // -1 se não houver pino CS
#define TFT_BL 5  // Pino Backlight

Adafruit_ILI9341 tft =Adafruit_ILI9341(TFT_CS, TFT_DC);

// Escrever texto na tela
void setText (int size, char* text){
    tft.setTextSize(size);
    if (size <= 3) tft.setTextColor(0xFE70, 0x31A6); 
    else if (size <= 5){tft.setTextColor(0xFDC0, 0x31A6);}
    else{tft.setTextColor(ILI9341_WHITE);}
    tft.print(text);
}

// Inicializador 
void tftSetup (){
    tft.begin();
    tft.setCursor(10, 10);
    setText (5, "ILI9341\n\n");
    setText (3, "test ok.");
    
}
