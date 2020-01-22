
System call について


-------------------------------------------------------------------------------

# System calls

ioctl は device dirver に制御情報を渡す
例えば、ファイルポインタの位置を変えたりなどは制御情報を渡すことで行われる

systemcall は man 2

* System call の欠点

** system call の呼び出しコストは大きい
  - カーネルモードに入る必要があるので

** ハードウェアの性能上限がある
- 例えば テープは 10k ずつしか読めないので、10k ごとに読むを繰り返さないと速度が出ない



# References

Beginnig Linux Programming 4th Ed


