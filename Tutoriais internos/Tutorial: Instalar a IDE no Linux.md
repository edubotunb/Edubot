# Tutorial: Como instalar a IDE do Sparki no Linux

## 1º Passo — Instalar o Arduino IDE 1.6.13

Instale a versão **Arduino IDE 1.6.13 para Linux 64-bit**.

Disponível em:

https://www.arduino.cc/en/software/OldSoftwareReleases

---

## 2º Passo — Extrair o arquivo

Após baixar o arquivo, extraia-o para a **Área de Trabalho**.

---

## 3º Passo — Configurar os arquivos da IDE

Após extrair o arquivo:

1. Abra a pasta extraída.
2. Inicie um terminal dentro dessa pasta.
3. Execute os seguintes comandos:

```bash
ls
```

```bash
cd arduino-1.6.13
```

```bash
ls
```

> Se aparecerem várias pastas, significa que o comando funcionou.

Em seguida:

```bash
chmod +x arduino
chmod +x arduino-builder
chmod -R 777 tools-builder
```

Após executar os comandos, você pode fechar o terminal.

---

## 4º Passo — Instalar as dependências

Abra um novo terminal utilizando:

```text
Ctrl + Alt + T
```

Baixe o pacote necessário:

```bash
wget -c http://security.ubuntu.com/ubuntu/pool/main/r/readline6/libreadline6_6.3-8ubuntu2_amd64.deb
```

Depois, execute:

```bash
sudo apt update
sudo apt install libtinfo5
sudo dpkg -i ./libreadline6_6.3-8ubuntu2_amd64.deb
sudo apt install libncurses5
```

Após finalizar as instalações, você pode fechar o terminal.

---

## 5º Passo — Instalar a IDE

Abra a pasta:

```text
arduino-1.6.13
```

Inicie um terminal **dentro dessa pasta**.

Execute:

```bash
sh install.sh
```

A IDE estará instalada, mas ainda não estará pronta para ser utilizada.

Feche o terminal.

---

## 6º Passo — Abrir a IDE

Abra a **Arduino IDE**.

---

## 7º Passo — Adicionar as placas da ArcBotics

Na IDE, acesse:

```text
File → Preferences
```

Em:

```text
Additional Boards Manager URLs
```

adicione a seguinte URL:

```text
https://raw.githubusercontent.com/ArcBotics/ArcBotics-Boards/master/package_arcbotics.com_boards_index.json
```

---

## 8º Passo — Instalar a placa Sparki

Na IDE, acesse:

```text
Tools → Board → Boards Manager
```

Aguarde o carregamento.

Procure por:

```text
Sparki
```

e instale a placa.

---

## 9º Passo — Verificar a instalação

Após a instalação da placa Sparki:

1. Feche a IDE.
2. Abra novamente um terminal dentro da pasta do Arduino.
3. Execute:

```bash
ls
```

Verifique se todas as pastas estão aparecendo corretamente.

---

## 10º Passo — Configurar as permissões

Com o terminal aberto, execute:

```bash
getent group dialout
```

Adicione seu usuário ao grupo `dialout`:

```bash
sudo usermod -a -G dialout NOME_DO_SEU_USUARIO
```

Verifique novamente:

```bash
getent group dialout
```

Adicione seu usuário ao grupo `tty`:

```bash
sudo usermod -a -G tty NOME_DO_SEU_USUARIO
```

Por fim, execute:

```bash
groups NOME_DO_SEU_USUARIO
```

Verifique se aparecem os grupos:

```text
tty
dialout
```

---

## 11º Passo — Remover o ModemManager

Abra um novo terminal:

```text
Ctrl + Alt + T
```

Execute:

```bash
sudo apt-get remove modemmanager
```

Quando solicitado, confirme a remoção.

---

## 12º Passo — Reiniciar o computador

**Desligue e ligue novamente o computador.**

Após reiniciar, a configuração estará concluída.

# Pronto! 🎉

A IDE do Sparki está configurada para utilização no Linux.

---

## Fonte

Tutorial original utilizado pelo EduBot.
