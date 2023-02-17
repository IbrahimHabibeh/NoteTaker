from pytube import YouTube
import sys

yt = YouTube(str(sys.argv[1]))
yt.streams.filter(only_audio=True).first().download(filename="audio.wav")

with open("../transcripts/" + yt.title + ".txt", "w"):
    pass
print(yt.title)