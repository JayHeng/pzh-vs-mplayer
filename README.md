# Jays-MPlayer
A tiny multi-media player (GUI) based on VS2017+Qt5.12+FFmpeg4.1 | 一款基于C/C++的多媒体播放器，用于学习FFmpeg库API用法。  

### 1 开发环境安装
　　FFmpeg库是由C语言写的，所以Jays-MPlayer软件的开发语言选择了C/C\++，这样可以直接调用FFmpeg的源代码。C/C++开发第一IDE非VS莫属，GUI框架则选了当下最火的Qt，因此需要安装如下3个软件，完成基础开发环境的安装。  

> * Visual Studio 2017社区版下载: https://visualstudio.microsoft.com/vs/community/  
> * Qt 5.12.1开源版下载: http://download.qt.io/archive/qt/5.12/5.12.1/  
> * FFmpeg 4.1.1下载: https://github.com/FFmpeg/FFmpeg/releases/tag/n4.1.1  

　　Visual Studio和Qt各自安装结束后，需要将Qt关联进VS，就是再额外安装一个插件QtVsTools，方便后续在VS里开发Jays-MPlayer，具体步骤在Google里搜索关键字“Qt安装与VS2017配置”会有一大堆中文教程，随便参考一篇即可。  

> * Note: 痞子衡安装的VS2017具体版本为15.7.5，在VS中添加QtVsTools（默认安装的最新版本v2.3.2）插件后，重新打开VS工具提示 **The 'Vsix' package did not load correctly** 错误信息，后在Qt官方的 [visual-studio-tools-2-3-1发布公告](https://blog.qt.io/blog/2019/01/21/qt-visual-studio-tools-2-3-1-released/) 帖子下发现有不少人也有类似问题，QtVsTools开发者Miguel Costa总是建议将VS升级到最新版本（比如15.9.5），但VS升级较麻烦，痞子衡建议可将QtVsTools版本降低（比如v2.2.0）。  
> * QtVsTools下载：https://download.qt.io/official_releases/vsaddin/ ，安装双击.vsix文件即可。  