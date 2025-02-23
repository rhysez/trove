package lib

func AutoFormatDirArg(args []string) string {

	if len(args) > 1 {
		lastCharAsByte := args[1][len(args[1])-1]
		if lastCharAsByte != '/' {
			pathWithTrailingSlash := args[1] + "/"
			return pathWithTrailingSlash
		}
		return args[1]
	} else {
		return "./"
	}
}
