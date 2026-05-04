# WolfHeaddressFix

Mini-mod que corrige um crash do servidor/cliente ao causar dano em headgear `Headdress_Wolf` (Wolf Headdress).

**[English version](README_EN.md)**

## O bug

No `config.cpp` vanilla do DayZ (`DZ\characters\headgear\config.cpp`), a classe `Headdress_Wolf > DamageSystem > healthLevels` no level **0.7** referencia o rvmat com **barra invertida dupla**:

```
"DZ\characters\headgear\data\\wolfheaddress_fur_alpha_reversed.rvmat"
                            ^^
```

Quando o item entra nesse health level (típico após um headshot que não mata), o engine não consegue resolver o path no PBO, retorna NULL, e desreferencia o ponteiro causando access violation. O dano é replicado via CDP a todos os clientes que enxergam o player ferido, fazendo todos crasharem juntos.

## A correção

Esse mod redefine `Headdress_Wolf > DamageSystem` com o path correto em todos os health levels.

## Verificação

1. Reproduza o cenário: 3 players na mesma sala, um com Headdress_Wolf, outro atira na cabeça.
2. Sem o fix: os 3 crasham (access violation em DayZ_x64.exe).
3. Com o fix: nenhum crash.
