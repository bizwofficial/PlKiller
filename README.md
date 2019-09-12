# PlKiller(Beta version)
A remote script which can shut other computers down.
# For retail build, please visit github.com/bizwofficial/plkiller/tree/rcs
# !WARNING! If you are not a developer, don't use this beta build as it may harm your computer.

Malware/Win32.plkiller
PlKiller是对KILLER病毒的再开发版本。PlKiller是一个自由的开源病毒，您不得将其用于商业用途。此帮助文档旨在说明如何使用PlKiller以及使用过程中出现的一些问题和解决方案。
PlKiller可以批量对计算机下达关机指令。目标计算机必须符合以下条件：
	-防火墙处于关闭状态；
	-登录凭据与当前计算机一致；
	-未通过组策略等途径对PlKiller采取防护措施。
要想使用PlKiller，请先新建一个文本文档（其存储路径若和PlKiller的路径相同或已存储在环境变量中，将更加方便），并在其中输入一个或多个目标计算机的名称或IP地址，其格式大概是这样：
	\\ComputerName1
	\\ComputerName2
	……
保存文档后，请运行PlKiller可执行文件（如果有必要，请先编译源文件），看到“Filename>”提示符后，输入刚才编辑的文本文档名。此时可分为两种情况：
	-如果该文档的路径和PlKiller的路径相同或已存储在环境变量中，直接输入文件名即可（如“names.txt”）；
	-若非上述情况，请输入文件的完整路径（如“C:\Users\PX\Desktop\names.txt”）。
输入文件名后，若出现“Success”字样，则说明目标计算机已被关机。若出现其它问题，请试试以下方法：
	-检查网线是否插好；
	-检查当前计算机和目标计算机是否在同一局域网内；
	-检查目标计算机是否采取防护措施；
	-如果您对PlKiller进行了再开发，请检查源代码是否存在错误（写给开发者）；
	-在线获取PlKiller支持。

当前目录附赠了一些现成的模板，祝您使用愉快:)
-----------------------------------------------
PlKiller允许您通过命令行直接调用可执行程序本体。格式如下：
	PlKiller xxx.txt
-----------------------------------------------
PlKiller零售版允许您自定义重复关机的次数，只需在文本文档前加上一行重复次数就行了，如：
	103
	\\ComputerName1
	\\ComputerName2
	……
表示重复关机103次。输入0代表极限模式。
需要注意的是，PlKiller零售版不再开源，需购买后方可使用。
