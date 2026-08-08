#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <stdbool.h>
#include <windows.h>


int main() {
    SetConsoleTitle("dadinho em C");

    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    srand(time(NULL));
    
    int dado;
    int c;

    HANDLE hConsole = GetStdHandle(-11);
    SetConsoleTextAttribute(hConsole, 0xA);
    
    while (true) {
        puts("--- enter: girar dado ---");
        puts("--- s/S: sair ---");
        
        printf("escolha uma opcão: ");
        c = getchar();
        
        if (c == 's' || c == 'S') {
          int c_2 = getchar();
          
          if (c_2 == '\n') {
            printf("pressione qualquer tecla para encerrar o programa . . .");
            system("pause > nul");
            break;
          }
        }
        
        if (c != '\n') {
          SetConsoleTextAttribute(hConsole, 0x4);

          puts("");
          puts("ERRO: DIGITE ALGO VÁLIDO\n");

          SetConsoleTextAttribute(hConsole, 0xA);
          
          while ((c = getchar()) != '\n' && c != EOF);
          continue;
        }
        
        puts("");
        
        puts("🎲 girando o dado\n");
        
        Sleep(0x3e8);
        
        dado = rand() % 6 + 1;
        printf("caiu: %d\n", dado);
        
        puts("");
    }

    SetConsoleTextAttribute(hConsole, 0x7);
    
    ExitProcess(0);
}
