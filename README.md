# Bubble sort algorithm

Dette C-program er lavet i forbindelse med kursus: **62712- Basic C-programmeing**, 
der implementerer Bubble sort algoritmen. 
Programmet tager ikke brugerinput.

## Filer
- `bubble_sort.h` – **deklarering af funktioner og konstanter:**  *letters_in_order*, *numbers_ascending*, *swap* samt *bubble_sort*.
- `bubble_sort.c` – **implementering af funktionerne:** *letters_in_order*, *numbers_ascending*, *swap* samt *bubble_sort*
- `main.c` – **Samlet kørsel af bubble sort, samt implementering af funktionerne:** *print_char_arr* og *print_num_arr*,  .  

### Funktioner
- `void swap(char *a, char *b)`
- Swapper indeholdet ved de angivende referencer.  
- `bool letters_in_order(char letter1, char letter2)`
- Tjekker om letter1 kommer før/ligmed letter2 i alfabetet og returnerer True, ellers false.
- `bool numbers_ascending(char num1, char num2);`
- Tjekker om num1 kommer før/ligmed num2 (stigende rækkefølge) og returnerer True, ellers false.
- `void bubble_sort(char arr[], bool (*pair_is_in_order)(char, char))`
- Sorterer et char array med bubble sort algorithmen. Funktionspointeren(pair_is_order), der angiver om to elementer er i korrekt orden, sendes som argument, hvor af rækkefølgen bliver bestemt.
  
## How to use eksempel:
 
