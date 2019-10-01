# C言語の基本

## 標準入力

* **数値を入力する**

```c
#include <stdio.h>

int main(void){
    int x;              
    scanf("%d",&x);
}
```
## その他

* **小数点以下を切り上げる**

#include <math.h>のceillを用いることで小数点以下を切り上げることが可能

```c
#include <stdio.h>
#include <math.h>

int main(void){
    int x;              
    scanf("%d",&x);
}
```

* **非負の平方根を計算する**