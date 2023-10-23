# Отчёт по лабораторной работе №6
## по курсу "Фундаментальная информатика"

Студент группы М8О-108Б-23 Попов Александр Дмитриевич

Работа выполнена

Преподаватель: каф. 806 Севастьянов Виктор Сергеевич

1. **Тема**: Программирование с использованием диаграмм Тьюринга.
2. **Цель работы**: Научиться пользоваться диаграммами Тьюринга, построить на их базе простой алгоритм.
3. **Задание:** Поразрядная конъюнкция двух двоичных чисел одинаковой длины.
4. **Идея, метод, алгоритм решения задачи**: Понять, как оптимизировать процесс фиксации каждого из множителей и их возвращения на свои места; убедиться, что алгоритм нормирован; написать программу; 
5. **Сценарий выполнения работы**: Перемножить все разряды входных чисел без потерь или искажения изначальных слов; тестирование;

| Входные данные | Выходные данные                        | Описание тестируемого случая                    |
|----------------|----------------------------------------|-------------------------------------------------|
| 0 0            | 0                                      | Тест №1                                         |
| 1111 1111      | 1111                                   | Тест №2                                         |
| 1010 0110      | 0010                                   | Тест №3                                         |

6. **Протокол**:

![bitwise_conjunction](https://github.com/aldpopov/year_one/assets/144669135/58b7d4e3-9e06-49b6-b13c-c75d8eefe25e)
![got_one](https://github.com/aldpopov/year_one/assets/144669135/801cc8c9-3f14-4057-9e73-2325f0f844d5)
![got_zero](https://github.com/aldpopov/year_one/assets/144669135/bd0f639c-9839-4bfd-97a2-d191cbf8b46b)
![got_one_one](https://github.com/aldpopov/year_one/assets/144669135/a30066b8-a1f9-4993-ba7a-b94794e43669)
![got_one_zero](https://github.com/aldpopov/year_one/assets/144669135/26d6e3d8-734c-4cdd-8a91-c49a0cc43300)
![got_zero_one](https://github.com/aldpopov/year_one/assets/144669135/bca39fb8-ee5c-4b2f-b99d-7be8589ec095)
![got_zero_zero](https://github.com/aldpopov/year_one/assets/144669135/8ee3030c-067d-409f-bf7b-5e536d25c522)
![return_one_got_one](https://github.com/aldpopov/year_one/assets/144669135/bf7a06cf-f245-46b8-bf17-a9e9d67153b0)
![return_one_got_zero](https://github.com/aldpopov/year_one/assets/144669135/4fc6e4ad-1648-4e2f-b5d8-b765f4adb69c)
![return_one_one_end](https://github.com/aldpopov/year_one/assets/144669135/03e6503b-bcd7-4f26-8366-01dc09501e91)
![return_one_zero_end](https://github.com/aldpopov/year_one/assets/144669135/6f49971a-9eb0-4aed-b34f-fb7153a15aef)
![return_zero_got_one](https://github.com/aldpopov/year_one/assets/144669135/86b9b11c-6a9c-4a31-b27c-ef5a74112b0e)
![return_zero_got_zero](https://github.com/aldpopov/year_one/assets/144669135/7cf2f0c1-3515-4161-b518-b0c46af66330)
![return_zero_one_end](https://github.com/aldpopov/year_one/assets/144669135/9cb6d958-bd50-4f5f-8103-67bb3e5e850b)
![return_zero_zero_end](https://github.com/aldpopov/year_one/assets/144669135/f5241252-5ddc-41da-8590-99c01581389b)

7. **Замечания автора** по существу работы: Отсутствуют.
8. **Выводы**: Освоено базовое программировние с применением диаграмм Тьюринга, которое поможет в разработке алгоритмов решения более трудных задач в дальнейшем. Опробованы разные версии виртуальных машин Тьюринга, и изучен их основной функционал. 
