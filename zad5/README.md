# Zadanie 5: Liczenie znaków w UTF-8
**Pliki:** `main.cpp` (funkcja `countCodePoints`)

## Cel

Zaimplementuj dwie funkcje:

```cpp
std::size_t countBytes(std::u8string_view text);        // zwraca text.size()
std::size_t countCodePoints(std::u8string_view text);   // liczy znaki Unicode
```

Pokaż różnicę między nimi.

#### Czym jest std::u8string_view?

W przeciwieństwie do zwykłego std::string_view (który operuje na char), std::u8string_view operuje na typie char8_t, który pojawił się również w C++20 w celu jednoznacznego odróżnienia bajtów kodowania UTF-8 od zwykłego tekstu lub surowych danych binarnych.

## Zasada

W UTF-8 każdy bajt, który **nie** jest bajtem kontynuacji, zaczyna nowy znak. Bajt kontynuacji ma postać `10xxxxxx`, czyli `(b & 0xC0) == 0x80`.

## Budowanie

Analogicznie jak w 3