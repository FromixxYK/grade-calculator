# Coding rules (C++)

## 1. Variables use camelCase, constants use UPPER_CASE
```cpp
int scoreSum = 0;
const int SCORE_COUNT = 5;
```

## 2. Indentation is 4 spaces
```cpp
if (score > 100) {
    cout << "Invalid score";
}
```

## 3. Names must be meaningful
Good: `studentCount`. Bad: `x`, `sc`.

## 4. Each logical block has a short comment
```cpp
// Read 5 scores for the current student
for (int i = 1; i <= SCORE_COUNT; i++) {
```

## 5. Always use braces {} and one statement per line
```cpp
if (average >= 90) {
    grade = 'A';
}
```
