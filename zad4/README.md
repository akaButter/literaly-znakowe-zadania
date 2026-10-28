# Zadanie 4: Literały surowe

**Pliki:** `main.cpp` (funkcje `isWindowsPath`, `extension`,`htmlLink`)

## Cel

Zaimplementuj trzy funkcje. Wszystkie wzorce i testowe ścieżki zapisz jako literały surowe.

### 1. `bool isWindowsPath(const std::string& s)`

Zwraca `true`, gdy napis wygląda jak ścieżka Windows: litera dysku, dwukropek, backslash, nazwy bez znaków zabronionych (`\ / : * ? " < > |`).

Użyj `std::regex` z literałem surowym.

### 2. `std::string extension(const std::string& path)`

Zwraca rozszerzenie z kropką (np. `".txt"`) albo pusty napis, gdy go nie ma. Kropka liczy się tylko w nazwie pliku, czyli po ostatnim `/` lub `\`.

### 3. `std::string htmlLink(const std::string& url, const std::string& text)`

Zwraca `<a href="URL">TEKST</a>`.

**Ważne:** szablon zbudowany jako literał surowy musi zawierać `)"` w treści. Zwykłe `R"(...)"` się tu nie skompiluje. Użyj delimitera, np. `R"xyz(...)xyz"`.

## Budowanie

Analogicznie jak w zadaniu 3.