# Underscore Word Counter

This project implements a text analysis algorithm in C that counts words in a specifically formatted string.

## ⚙️ Logic

1.  **Input:** Takes a string where words are joined by `_` (e.g., `code_in_c`).
2.  **Analysis:**
    * Iterates through the character array manually.
    * Counts every occurrence of the delimiter `_`.
3.  **Calculation:**
    * $Total Words = Count(\_) + 1$

## 🚀 Example Output

```text
Alt cizgi ile ayrilmis metni giriniz: ali_veli_sami_sukru

Metin: ali_veli_sami_sukru
Bulunan Kelime Sayisi: 4
