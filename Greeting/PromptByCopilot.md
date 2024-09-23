## GreetingLinuxDriver

Greeting Linux driver created by copilot for beginners' practice.

### AI指示のヒント

WindowsのCopilotに指示して、テスト用ローダブルモジュールの Hello ドライバを作ります。

- 役割と目的を明確化
- 作業内容は、必須条件を網羅して完結に
- 出力形式（言語、フレームワークなど）を明示

### Greeting ドライバ

前述のヒントを参考にして、Linux ドライバ・モジュールを実際に作ります。
コードが作成されたらば、Makefileも作られてください。

リンク集にプロンプトのサンプルがあるので、参考にしてください。

```
こんちは！あなたは優秀なLinuxカーネルに詳しいIoTプログラマーです。
初心者用の学習用に、単純な演習用のLinuxローダブルモジュールを次の条件で作成してください。
1. モジュール名は、greeting.ko とします。
2. ローダブルモジュール用のsysfs パラメータとして"debug" というint型の値、初期値'0'を持ちます。
3. 起動時にprintkで"Greetings! debug=%d" というメッセージで、debug パラメータの値を表示します。
4. Linuxカーネル 6.2 でビルドするためのMakefileも同時に出力します。
```
こんにちは！もちろん、お手伝いします。以下に、指定された条件に基づいてLinuxローダブルモジュールとMakefileを作成しました。

**greeting.c**

**Makefile**

```
ありがと。試してみます。
```

どういたしまして！うまくいくことを願っています。もし何か問題が発生したり、他に質問があれば、いつでも聞いてくださいね。頑張ってください！💪😊

**ここで、実際にビルドして、ファイル転送後、ロードして動作確認します。**

#### ソースファイルの書き出し

greeting.c の書き出し
```sh
$ cat > greeting.c
```

Makefileの書き出し
```sh
$ cat > Makefile
```

#### ソースコード修正とビルド

この時 Makefileがセルフコンパイル用記述の場合は、カーネルディレクトリ参照定義を **$(KDIR)** に修正します。
またMakefileの字下げ行頭文字が「タブ」である点に十分注意します。

```
    make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
```
の記述を以下の様に修正。行頭もタブに変更することを忘れずに。
```
    make -C ＄(KDIR) M=$(PWD) modules
```

ファイル修正後ビルドします。

```sh
$ make
```
