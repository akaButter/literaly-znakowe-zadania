# Zadanie 2: Tabela kodów znaków

**Pliki:** `main.cpp`

## Cel

Wypisz tabelę w formacie: `znak  kod_dziesiętny  kod_szesnastkowy`.

Przykład wiersza: `a  97  0x61`

Znaki do wypisania:

- `'a'`, `'z'`
- `'A'`, `'Z'`
- `'0'`, `'5'`, `'6'`
- `' '` (spacja), `'\n'`, `'\t'`

Dla znaków niedrukowalnych (`'\n'`, `'\t'`) wypisz w kolumnie znaku zapis tekstowy `\n` lub `\t`.

Wypisz też wyniki dwóch wyrażeń:
- `static_cast<char>('A' + 1)`
- `'z' - 'a'`

## Budowanie

Jak w zadaniu 1 (zmień nazwę programu na `zad2`).