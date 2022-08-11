# Checksum
Programa C que recibe numero de tarjeta de crédito para aplicar checksum y confirmar validez de número mediante evaluar condiciones.

Uso:

Usuario ingresa numero.

1 - Se verifica coherencia interna del numero vía checksum. (Requerido para que numero sea válido)
2 - Se realiza conteo de dígitos. (Requerido para determinar emisor)
3 - Se obtienen los primeros digitos. (Requerido para determinar emisor)

Si punto 1 se cumple y puntos 2 y 3 tienen coherencia entre sí, se retorna emisor de tarjeta (AMEX, Visa o MasterCard) por string vía consola.
Si cualquiera de los puntos no se cumple, se retorna 'Invalido' por consola.


![foto resultado](https://github.com/IgnacioMujica/Checksum/blob/main/tarjetas.png?raw=true)
