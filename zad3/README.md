# Zadanie 3: Szyfr Cezara
**Pliki:** `main.cpp` (funkcja `caesar`)

## Cel

Zaimplementuj:

```cpp
std::string caesar(const std::string& text, int shift);
```

Funkcja przesuwa każdą literę alfabetu łacińskiego o `shift` pozycji z zawijaniem (`z` + 1 = `a`, `Z` + 1 = `A`).

## Wymagania

- Wszystkie inne znaki (cyfry, spacje, interpunkcja) zostają bez zmian.
- Wielkość liter jest zachowana.
- `shift` może być ujemny. Odszyfrowanie to `caesar(text, -shift)`.
- Nie używaj `std::toupper`, `std::tolower` ani `std::isalpha`. Sprawdzaj zakresy ręcznie: `'a' <= c && c <= 'z'` itd.

## Testy

Testy są w `main.cpp`. Program kończy się kodem 1, jeśli choć jeden nie przejdzie.

## Budowanie
W folderze zad3:

Linux / macOS:
```bash
cmake -S . -B build
cmake --build build
cd build && ctest --output-on-failure
```

Windows (Visual Studio):
```powershell
cmake -S . -B build
cmake --build build --config Debug
cd build
ctest -C Debug --output-on-failure
```