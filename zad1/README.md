# Zadanie 1: Escapowanie w tekście

**Pliki:** `main.cpp`

## Cel

Program ma wypisać dokładnie trzy linie:

```
Ścieżka: "C:\Mojfolder\Temp\plik.txt"
Pierwsza<TAB>druga
Znak: 'A' (kod 65)
```

- `<TAB>` oznacza prawdziwy znak tabulacji.
- Znak `'A'` zapisz jako `'\x41'` albo `'\101'`.
- Liczbę 65 (w linijce 3) wyświetl używając rzutowania 'A' na int.
- Do linijki 1 spróbuj użyć zwykłych literałów, jak i `R"(...)"`.

## Budowanie

W folderze zad1:

Linux / macOS:
```bash
cmake -S . -B build
cmake --build build
./build/zad1
```

Windows (Visual Studio):
```powershell
cmake -S . -B build
cmake --build build --config Debug
.\build\Debug\zad1.exe
```