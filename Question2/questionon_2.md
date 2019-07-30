# 问题1-1 骑士的金币

## 问题描述

国王用金币赏赐忠于他的骑士。骑士在就职的第一天得到一枚金币。接下来的两天（第二天和第三天）每天得到两枚金币。接下来的三天（第四、五、六天）每天得到三枚金币接下来的四天（第七、八、九、十天）每天得到四枚金币。这样的赏赐形式一直延续：即连续N天骑士每天都得到N枚金币后，连续N+1天每天都将得到N+1枚金币，其中N为任一正整数。

编写一个程序，对给定的天数计算出骑士得到的金币总数（从任职的第一天开始）。

### 输入

输入文件至少包含一行，至多包含21行。输入中的每一行（除最后一行）表示一个测试案例，其中仅包含一个表示天数的正整数。天数范围为1~10000.输入的最后一行仅含整数0，表示输入的结束。

10

6

7

### 输出

对输入中的每一个测试案例，恰好输出一行数据。其中包含两天用空格隔开的正整数，前者表示案例中的天数，后者表示骑士从第一天到指定的天数所得到的金币总数。

10 30

6 14

7 18
