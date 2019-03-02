
package file

import (
	"os"
	"syscall"
)

type File struct {
	fd int
	name string
}

func newFile(fd int, name string) *File {
	if fd < 0 {
		return nil
	}
	return &File{fd, name}
}
