## README

### Название проекта: Управление динамической памятью и работа с контейнерами в C++

---

### Описание
Данный проект демонстрирует создание и работу с пользовательским классом `Mainclass`, который использует динамическую память. Также представлены примеры операций с контейнерами стандартной библиотеки C++ (`std::vector` и `std::list`) с соблюдением лучших практик программирования, включая "Правило пяти".

Программа выполняет следующие задачи:
1. **Управление динамической памятью** с использованием конструкторов, деструктора и перегруженных операторов.
2. **Работа с контейнерами ** (`std::vector` и `std::list`) для хранения объектов.
3. **Тестирование функциональности**, включая передачу объектов в функции, возвращение объектов, создание динамических и статических экземпляров.

---

### Возможности
1. **Пользовательский класс с динамической памятью:**
   - Данные хранятся в динамической памяти (`int`, `std::string`, `std::vector<int>`).
   - Реализованы конструкторы (по умолчанию, параметризованный, копирования, перемещения), деструктор и операторы присваивания.

2. **Операции с контейнерами:**
   - Работа с `std::vector` и `std::list` для хранения экземпляров `Mainclass`.
   - Очистка памяти для объектов, выделенных динамически.

3. **Работа с экземплярами:**
   - Управление динамической памятью.
   - Копирование и перемещение объектов.
   - Использование стандартных алгоритмов для обработки данных.

---

### Как запустить
1. Скомпилируйте проект с помощью компилятора, поддерживающего стандарт C++11 или выше:
   ```bash
   g++ -std=c++11 -o main main.cpp Main_class.cpp
   ```
2. Запустите полученную программу:
   ```bash
   ./main
   ```

---

### Структура проекта
1. **`Mainclass.hpp`:** Заголовочный файл, содержащий описание класса `Mainclass`.
2. **`Main_class.cpp`:** Реализация методов класса `Mainclass`, включая конструкторы, деструктор и перегрузку операторов.
3. **`main.cpp`:** Пример использования класса `Mainclass` и операций с контейнерами.

---

### Основные реализации




### Структура класса `Mainclass`
#### 1. Динамическая память в `Mainclass`
Класс содержит три динамических члена:
- `int* number`
- `std::string* description`
- `std::vector<int>* number_vector`
### Публичные члены
1. **Конструкторы:**
   - **`Mainclass()`**  
     Конструктор по умолчанию.
   - **`Mainclass(int num, const std::string& desc, const std::vector<int>& number_vec)`**  
     Параметризованный конструктор для создания объекта с заданными значениями.
   - **`Mainclass(const Mainclass& v)`**  
     Конструктор копирования. 
   - **`Mainclass(Mainclass&& v) noexcept`**  
     Конструктор перемещения. 

2. **Операторы присваивания:**
   - **`Mainclass& operator=(const Mainclass& v)`**  
     Оператор копирующего присваивания.
   - **`Mainclass& operator=(Mainclass&& v) noexcept`**  
     Оператор перемещающего присваивания. 

3. **Деструктор:**
   - **`~Mainclass()`**  
     Освобождает динамическую память, связанную с объектом.

4. **Методы:**
   - **`void show_data() const`**  
     Выводит значения всех атрибутов объекта.

---

#### 2. Операции с контейнерами
- **Работа с указателями:**
  Вектор `std::vector<Mainclass*>` демонстрирует динамическое выделение памяти и последующую очистку.

- **Работа с объектами:**
  В функциях `PointerVector` и `Vector_list_handle` показаны операции с контейнерами `std::vector` и `std::list`.

#### 3. Функции
- **`PointerVector`:** Создает динамические экземпляры класса `Mainclass`, сохраняет их в векторе и очищает память.
- **`modifyInstance`:** Изменяет экземпляр класса, переданный по ссылке.
- **`createModifiedInstance`:** Возвращает копию экземпляра класса после его обработки.

---

### Пример вывода
При запуске программы выводится информация о вызове конструкторов, деструктора и операторов:
```plaintext
Parameterized constructor
Parameterized constructor
Number: 10
Description: Static Instance
Number vector: 1 2 3 
Number: 20
Description: Dynamic Instance
Number vector: 4 5 6 
Destructor
Parameterized constructor
Parameterized constructor
Parameterized constructor
Parameterized constructor
Parameterized constructor
Parameterized constructor
Parameterized constructor
Parameterized constructor
Parameterized constructor
Parameterized constructor
Number: 0
Description: Pointer Vector Element 0
Number vector: 0 0 0
Number: 1
Description: Pointer Vector Element 1
Number vector: 1 2 4
Number: 2
Description: Pointer Vector Element 2
Number vector: 2 4 8
Number: 3
Description: Pointer Vector Element 3
Number vector: 3 6 12
Number: 4
Description: Pointer Vector Element 4
Number vector: 4 8 16
Number: 5
Description: Pointer Vector Element 5
Number vector: 5 10 20
Number: 6
Description: Pointer Vector Element 6
Number vector: 6 12 24
Number: 7
Description: Pointer Vector Element 7
Number vector: 7 14 28
Number: 8
Description: Pointer Vector Element 8
Number vector: 8 16 32
Number: 9
Description: Pointer Vector Element 9
Number vector: 9 18 36
Destructor
Destructor
Destructor
Destructor
Destructor
Destructor
Destructor
Destructor
Destructor
Destructor
Number: 10
Description: Static Instance
Number vector: 1 2 3
Number: 10
Description: Static Instance
Number vector: 1 2 3
Copy constructor
Number: 10
Description: Static Instance
Number vector: 1 2 3
Move constructor
Destructor
Number: 10
Description: Static Instance
Number vector: 1 2 3
Parameterized constructor
Parameterized constructor
Parameterized constructor
Parameterized constructor
Parameterized constructor
Parameterized constructor
Parameterized constructor
Parameterized constructor
Parameterized constructor
Parameterized constructor

Number: 1
Description: Vector Element 0
Number vector: 0 0 0
Number: 2
Description: Vector Element 1
Number vector: 1 2 4
Number: 3
Description: Vector Element 2
Number vector: 2 4 8
Number: 4
Description: Vector Element 3
Number vector: 3 6 12 
Number: 5
Description: Vector Element 4
Number vector: 4 8 16
Number: 6
Description: Vector Element 5
Number vector: 5 10 20
Number: 7
Description: Vector Element 6
Number vector: 6 12 24
Number: 8
Description: Vector Element 7
Number vector: 7 14 28
Number: 9
Description: Vector Element 8
Number vector: 8 16 32
Number: 10
Description: Vector Element 9
Number vector: 9 18 36
Parameterized constructor
Parameterized constructor
Parameterized constructor
Parameterized constructor
Parameterized constructor
Parameterized constructor
Parameterized constructor
Parameterized constructor
Parameterized constructor
Parameterized constructor

List Element [0]:
Number: 1
Description: List Element 0
Number vector: 0 0 0
List Element [1]:
Number: 2
Description: List Element 1
Number vector: 1 2 4
List Element [2]:
Number: 3
Description: List Element 2
Number vector: 2 4 8
List Element [3]:
Number: 4
Description: List Element 3
Number vector: 3 6 12
List Element [4]:
Number: 5
Description: List Element 4
Number vector: 4 8 16 
List Element [5]:
Number: 6
Description: List Element 5
Number vector: 5 10 20
List Element [6]:
Number: 7
Description: List Element 6
Number vector: 6 12 24
List Element [7]:
Number: 8
Description: List Element 7
Number vector: 7 14 28
List Element [8]:
Number: 9
Description: List Element 8
Number vector: 8 16 32
List Element [9]:
Number: 10
Description: List Element 9
Number vector: 9 18 36
Destructor
Destructor
Destructor
Destructor
Destructor
Destructor
Destructor
Destructor
Destructor
Destructor
Destructor
Destructor
Destructor
Destructor
Destructor
Destructor
Destructor
Destructor
Destructor
Destructor
Destructor
Destructor
```

---