# 🎲 Dadinho em C

Um jogo simples de dado para terminal Windows desenvolvido em linguagem C. O projeto utiliza a API nativa do Windows para estilização de cores no console e tratamento de codificação UTF-8.

## 🚀 Funcionalidades

- **Sorteio aleatório:** Gera valores entre 1 e 6 usando `rand()` alimentado pelo tempo (`time.null`).
- **Interface colorida:** Usa `windows.h` para indicar o estado do menu (verde) e alertas de erro (vermelho).
- **Tratamento de acentuação:** Configurado com `CP_65001` (UTF-8) para exibição correta de caracteres e emojis no terminal.
- **Validação de entrada:** Tratamento e limpeza do buffer (`getchar()`) contra entradas inválidas.

## 🛠️ Tecnologias e Bibliotecas

- **Linguagem:** C (C99)
- **Compilador sugerido:** GCC (MinGW)
- **Bibliotecas padrão:** `<stdio.h>`, `<stdlib.h>`, `<time.h>`, `<stdbool.h>`, `<time.h>`
- **API do Windows:** `<windows.h>`
