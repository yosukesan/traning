// IO template is based on
// https://atcoder.jp/contests/agc033/submissions/19482394

package main

import (
    "fmt"
    "bufio"
    "strconv"
    "os"
)

var stdin = init_stdin()

func init_stdin() *bufio.Scanner {
    buf_size := 1 * 1024 * 1024 // MiB
    //buf_size := 1024
    var stdin = bufio.NewScanner(os.Stdin)
    stdin.Buffer(make([]byte, buf_size), buf_size)
    stdin.Split(bufio.ScanWords)
    return stdin
}

func scans() string {
    stdin.Scan()
    return stdin.Text()
}

func scani() int {
    i, _ := strconv.Atoi(scans())
    return i
}

func main (){
}
