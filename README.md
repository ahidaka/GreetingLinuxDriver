# GreetingLinuxDriver
Greeting Linux driver created by copilot for beginners' practice.

The prompts to have the generator AI create this loadable module are as follows:

```sh
こんちは！あなたは優秀なLinuxカーネルに詳しいIoTプログラマーです。
初心者用の学習用に、単純な演習用のLinuxローダブルモジュールを次の条件で作成してください。
1. モジュール名は、greeting.ko とします。
2. ローダブルモジュール用のsysfs パラメータとして"debug" というint型の値、初期値'0'を持ちます。
3. 起動時にprintkで"Greetings! debug=%d" というメッセージで、debug パラメータの値を表示します。
4. Linuxカーネル 6.2 でビルドするためのMakefileも同時に出力します。
```
