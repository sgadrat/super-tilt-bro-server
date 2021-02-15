#!/bin/bash

. venv/bin/activate
export FLASK_ENV=development
export FLASK_APP=leaderboard.py
flask run
